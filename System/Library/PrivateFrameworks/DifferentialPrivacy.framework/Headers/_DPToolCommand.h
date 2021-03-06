/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _DPStorage;

@interface _DPToolCommand : NSObject {

	BOOL _writeOK;
	NSString* _action;
	NSString* _arguments;
	NSString* _recordKey;
	NSString* _databasePath;
	_DPStorage* _storage;

}

@property (nonatomic,readonly) _DPStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL writeOK;                              //@synthesize writeOK=_writeOK - In the implementation block
+(id)supportedCommands;
+(id)command:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(BOOL)arg5 ;
-(NSString *)databasePath;
-(id)initWithAction:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(BOOL)arg5 ;
-(BOOL)recordNumbers:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordBitValues:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordStrings:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordWords:(id)arg1 forKey:(id)arg2 ;
-(id)queryForKey:(id)arg1 ;
-(BOOL)submitRecordsForKey:(id)arg1 ;
-(BOOL)listReportsFor:(id)arg1 ;
-(BOOL)listKeys;
-(BOOL)executeCommand;
-(BOOL)writeOK;
-(_DPStorage *)storage;
-(NSString *)recordKey;
-(NSString *)arguments;
-(id)init;
-(id)description;
-(NSString *)action;
@end

