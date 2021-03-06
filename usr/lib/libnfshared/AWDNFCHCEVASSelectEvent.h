/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCEVASSelectEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _mobileCapabilities;
	unsigned _swStatus;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasMobileCapabilities; 
@property (assign,nonatomic) unsigned mobileCapabilities;                            //@synthesize mobileCapabilities=_mobileCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasSwStatus; 
@property (assign,nonatomic) unsigned swStatus;                                      //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(BOOL)hasUuidReference;
-(unsigned long long)timeDeltaFromReference;
-(NSData *)uuidReference;
-(void)setSwStatus:(unsigned)arg1 ;
-(void)setHasSwStatus:(BOOL)arg1 ;
-(BOOL)hasSwStatus;
-(unsigned)swStatus;
-(void)setMobileCapabilities:(unsigned)arg1 ;
-(void)setHasMobileCapabilities:(BOOL)arg1 ;
-(BOOL)hasMobileCapabilities;
-(unsigned)mobileCapabilities;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

