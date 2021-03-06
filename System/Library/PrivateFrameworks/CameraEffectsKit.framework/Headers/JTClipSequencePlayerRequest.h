/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, JTClipSequencePlayer;

@interface JTClipSequencePlayerRequest : NSObject {

	NSString* _uniqueID;
	/*^block*/id _block;
	double _queuedTime;
	double _startTime;
	unsigned long long _type;
	/*^block*/id _completionBlock;
	JTClipSequencePlayer* _player;

}

@property (nonatomic,readonly) NSString * uniqueID;                //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) id block;                               //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) double queuedTime;                    //@synthesize queuedTime=_queuedTime - In the implementation block
@property (assign,nonatomic) double startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id completionBlock;                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (__weak) JTClipSequencePlayer * player;                  //@synthesize player=_player - In the implementation block
+(id)stringFromRequestType:(unsigned long long)arg1 ;
-(NSString *)uniqueID;
-(double)queuedTime;
-(void)setQueuedTime:(double)arg1 ;
-(JTClipSequencePlayer *)player;
-(void)setPlayer:(JTClipSequencePlayer *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ofType:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)block;
-(id)completionBlock;
-(void)setBlock:(id)arg1 ;
@end

