//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSSortDescriptor.h>

@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor
{
    NSArray *_keyPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(_Bool)arg2;
@property(copy, nonatomic) NSArray *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
