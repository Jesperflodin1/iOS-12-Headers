/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BDSCloudKitSupportSignOutDeleteWithoutInstance.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSPersistentStore, NSString;

@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance> {

	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSPersistentStore* _persistentStore;
	NSString* _persistentStorePath;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) NSPersistentStore * persistentStore;                                    //@synthesize persistentStore=_persistentStore - In the implementation block
@property (nonatomic,copy) NSString * persistentStorePath;                                           //@synthesize persistentStorePath=_persistentStorePath - In the implementation block
+(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
+(id)_persistentStoreDirectory;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSString *)persistentStorePath;
-(void)setPersistentStore:(NSPersistentStore *)arg1 ;
-(NSPersistentStore *)persistentStore;
-(void)setPersistentStorePath:(NSString *)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 persistentStorePath:(id)arg2 ;
-(void)_setupPersistentStoreCoordinator;
-(id)_persistentStoreCoordinatorOptions;
-(void)_createPersistentStoreDirectory;
-(void)_logIfError:(id)arg1 operation:(id)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
@end

