//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKValueDataProvider.h>

@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider
{
}

- (void)_sumFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentValue;

@end

