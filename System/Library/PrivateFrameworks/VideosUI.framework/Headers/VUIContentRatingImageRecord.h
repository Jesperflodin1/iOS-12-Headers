//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIContentRatingImageRecord : NSObject
{
    _Bool _templatedImage;
    NSString *_resourceName;
}

@property(nonatomic, getter=isTemplatedImage) _Bool templatedImage; // @synthesize templatedImage=_templatedImage;
@property(copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (void).cxx_destruct;
- (id)initWithResourceName:(id)arg1 isTemplatedImage:(_Bool)arg2;

@end

