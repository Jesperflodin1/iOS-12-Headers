//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

@class NSMutableSet;

@interface MemoryEntity : SSMemoryEntity
{
    NSMutableSet *_properties;
}

+ (_Bool)deleteAllInDatabase:(id)arg1 matchingPredicate:(id)arg2;
- (void).cxx_destruct;
- (id)valueForProperty:(id)arg1;
- (void)setValuesWithDictionary:(id)arg1;
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)saveInDatabase:(id)arg1;
- (_Bool)deleteInDatabase:(id)arg1;

@end

