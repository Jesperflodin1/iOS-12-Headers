/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@class NSDictionary;

@interface AppletConfigurationData : NSObject {

	NSDictionary* internal;

}
+(os_state_data_s*)dumpState;
+(void)registerStateHandler;
+(id)extraDebugScriptForModule:(id)arg1 ;
+(BOOL)isValidConfigData:(id)arg1 error:(id*)arg2 ;
+(id)GetStaticConfigurationData;
+(id)getInstance;
+(id)dataHash;
+(id)scriptForModule:(id)arg1 ;
+(id)plasticCardScriptForModule:(id)arg1 ;
+(BOOL)setConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end

