/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:28:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLFaceRebuildDescription <NSObject>
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) double size; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isManual,nonatomic,readonly) BOOL manual; 
@property (getter=isRepresentative,nonatomic,readonly) BOOL representative; 
@property (nonatomic,readonly) int nameSource; 
@property (nonatomic,readonly) int cloudNameSource; 
@property (getter=isClusterRejected,nonatomic,readonly) BOOL clusterRejected; 
@required
-(int)nameSource;
-(BOOL)isRepresentative;
-(int)cloudNameSource;
-(BOOL)isClusterRejected;
-(double)centerX;
-(double)centerY;
-(double)size;
-(BOOL)isHidden;
-(BOOL)isManual;

@end

