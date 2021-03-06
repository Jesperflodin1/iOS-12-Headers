/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSharedAssetsControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<CKSharedAssetsControllerDelegate> delegate; 
@required
-(CGSize*)contentSizeThatFits:(CGSize)arg1;
-(unsigned long long)assetType;
-(void)parentScrollViewDidScroll:(CGPoint)arg1;
-(void)updateAttachmentItems:(id)arg1;
-(BOOL)isDisplayingAttachmentContent;
-(void)setDelegate:(id)arg1;
-(id<CKSharedAssetsControllerDelegate>)delegate;

@end

