//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSTGroupNode;

@protocol TSTGroupByChangeProtocol
- (void)didChangeGroupByStructure;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e *)arg1 fromGroup:(TSTGroupNode *)arg2;
- (void)didAddRowUID:(const UUIDData_5fbc143e *)arg1 toGroup:(TSTGroupNode *)arg2;
- (void)didRemoveGroup:(TSTGroupNode *)arg1;
- (void)willRemoveGroup:(TSTGroupNode *)arg1;
- (void)didCreateGroup:(TSTGroupNode *)arg1;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
@end

