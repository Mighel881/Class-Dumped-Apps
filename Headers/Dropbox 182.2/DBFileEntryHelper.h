//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBFileEntryHelper : NSObject
{
}

+ (_Bool)canBeOfflined:(id)arg1;
+ (id)fileLockingHolderInfoForFileEntry:(id)arg1;
+ (id)preferredDisplaySizeInBytesForFileType:(unsigned long long)arg1 cloudDocInfo:(id)arg2 fileMetadataContentSize:(id)arg3;
+ (id)preferredDisplaySizeInBytesForFileEntry:(id)arg1;
+ (id)accessibilityDescriptionForType:(unsigned long long)arg1 metadataFull:(id)arg2;
+ (unsigned long long)fileTypeForPath:(id)arg1 isDirectory:(_Bool)arg2;

@end
