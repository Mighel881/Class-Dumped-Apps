//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBFileManager : NSObject
{
}

+ (id)sharedManager;
+ (id)db_fileManager;
+ (void)setFileManager:(id)arg1;
- (_Bool)moveItemsAtDirectoryPath:(id)arg1 toDirectoryPath:(id)arg2 error:(id *)arg3;
- (id)attributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2;
- (_Bool)fileExistsAtPath:(id)arg1;
- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;
- (_Bool)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3;

@end
