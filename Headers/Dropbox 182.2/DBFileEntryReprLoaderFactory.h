//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileEntryReprLoaderFactoryProtocol-Protocol.h"

@interface DBFileEntryReprLoaderFactory : NSObject <DBFileEntryReprLoaderFactoryProtocol>
{
}

+ (id)thumbnailLoaderForEntry:(id)arg1 repr:(long long)arg2;
+ (id)previewFileLoaderForEntry:(id)arg1 previewType:(long long)arg2 fallbackToOriginalOnFailure:(_Bool)arg3;
+ (id)fullFileLoaderForEntry:(id)arg1;

@end
