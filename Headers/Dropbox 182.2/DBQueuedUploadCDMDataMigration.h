//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBSQLiteCDMDataMigrationBase.h"

@class DBCrossAppUploadQueueLockFactory, NSString;

@interface DBQueuedUploadCDMDataMigration : DBSQLiteCDMDataMigrationBase
{
    DBCrossAppUploadQueueLockFactory *_lockFactory;
    NSString *_userId;
}

- (void).cxx_destruct;
- (id)parameterizedMigrationQueriesFromHomePath:(id)arg1 toHomePath:(id)arg2;
- (id)migrationId;
- (_Bool)deleteData;
- (_Bool)updateWithMigratedDataFromWorkingDirectory:(id)arg1;
- (_Bool)migrateDataToWorkingDirectory:(id)arg1 withInfo:(id)arg2;
- (id)initWithQueuedUploadDatabasePath:(id)arg1 userId:(id)arg2;

@end
