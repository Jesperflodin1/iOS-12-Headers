/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:36 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSSiteMetadataProviderDelegate <NSObject>
@required
-(void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 ofType:(long long)arg3 didReceiveNewData:(BOOL)arg4 forRequest:(id)arg5;
-(void)siteMetadataProvider:(id)arg1 cancelRequestsWithTokens:(id)arg2;
-(id)siteMetadataProvider:(id)arg1 registerRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4;
-(id)siteMetadataProvider:(id)arg1 registerOneTimeRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4;
-(id)siteMetadataProvider:(id)arg1 webViewOfSize:(CGSize)arg2 withConfiguration:(id)arg3;
-(void)siteMetadataProvider:(id)arg1 didFinishUsingWebView:(id)arg2;

@end

