//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned int _type;
    NSString *_name;
    unsigned int _flags;
    void *_attr;
    void *_cache;
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)filterWithName:(id)arg1;
+ (id)filterWithType:(id)arg1;
+ (id)filterTypes;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct Object *)CA_copyRenderValue;
- (void)dealloc;
- (void)setDefaults;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
@property(getter=isAccessibility) _Bool accessibility;
@property _Bool cachesInputImage;
@property(getter=isEnabled) _Bool enabled;
- (_Bool)enabled;
@property(copy) NSString *name;
@property(readonly) NSString *type;
- (id)initWithName:(id)arg1;
- (id)initWithType:(id)arg1;

@end
