//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSArray, NSString;

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand>
{
}

+ (id)domainObjectRetrieveWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectRetrieve;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *identifiers;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

