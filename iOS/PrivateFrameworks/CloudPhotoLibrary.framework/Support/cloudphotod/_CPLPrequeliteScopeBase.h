//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLPrequeliteVariableGroup.h"

@class CPLPrequeliteVariable;

@interface _CPLPrequeliteScopeBase : CPLPrequeliteVariableGroup
{
    CPLPrequeliteVariable *_scopeIdentifierVar;
    CPLPrequeliteVariable *_scopeTypeVar;
    CPLPrequeliteVariable *_localIndexVar;
    CPLPrequeliteVariable *_cloudIndexVar;
    CPLPrequeliteVariable *_stableIndexVar;
    CPLPrequeliteVariable *_creationDateVar;
}

@property(readonly, nonatomic) CPLPrequeliteVariable *creationDateVar; // @synthesize creationDateVar=_creationDateVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *stableIndexVar; // @synthesize stableIndexVar=_stableIndexVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *cloudIndexVar; // @synthesize cloudIndexVar=_cloudIndexVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *localIndexVar; // @synthesize localIndexVar=_localIndexVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *scopeTypeVar; // @synthesize scopeTypeVar=_scopeTypeVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *scopeIdentifierVar; // @synthesize scopeIdentifierVar=_scopeIdentifierVar;
- (void).cxx_destruct;
- (id)init;

@end
