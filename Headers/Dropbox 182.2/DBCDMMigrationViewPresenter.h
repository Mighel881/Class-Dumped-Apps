//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DBCDMMigrator;

@interface DBCDMMigrationViewPresenter : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: uploadManagerIntialized
    // Error parsing type: , name: preMigrationQueuedUploadCount
    // Error parsing type: , name: newMigrationHomePath
    // Error parsing type: , name: migrationViewController
    // Error parsing type: , name: uploadManagerObserverHandle
    // Error parsing type: , name: modalManager
    // Error parsing type: , name: userNotificationCenter
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithModalManager:(id)arg1 delegate:(id)arg2 userNotificationCenter:(id)arg3;
@property(nonatomic) __weak id <DBCDMMigrator> delegate; // @synthesize delegate;

@end

