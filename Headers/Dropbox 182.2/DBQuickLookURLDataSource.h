//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewControllerDataSource-Protocol.h"

@class DBQLPreviewItem;

@interface DBQuickLookURLDataSource : NSObject <QLPreviewControllerDataSource>
{
    DBQLPreviewItem *_previewItem;
}

- (void).cxx_destruct;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)initWithURL:(id)arg1 fileType:(unsigned long long)arg2;

@end

