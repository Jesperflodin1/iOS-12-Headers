/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSModeAssertionStateProviderDataSource <NSObject>
@required
-(id)currentlyActiveModeAssertionsForStateProvider:(id)arg1;
-(unsigned long long)currentLostModeStateForStateProvider:(id)arg1;
-(unsigned long long)currentInterruptionBehaviorSettingForStateProvider:(id)arg1;
-(unsigned long long)currentUILockStateForStateProvider:(id)arg1;
-(id)stateProvider:(id)arg1 effectiveModeIdentifierForModeAssertion:(id)arg2;
-(id)stateProvider:(id)arg1 effectiveLifetimeForModeAssertion:(id)arg2;
-(id)stateProvider:(id)arg1 activeDateIntervalForModeAssertion:(id)arg2;

@end

