//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBPDFFileViewerInteractionManagerProtocol-Protocol.h"

@class DBWeakObserverMap;

@interface DBPDFFileViewerInteractionManager : NSObject <DBPDFFileViewerInteractionManagerProtocol>
{
    CDUnknownBlockType _currentPageBlock;
    DBWeakObserverMap *_observerMap;
    _Bool _documentLoaded;
}

@property(nonatomic) _Bool documentLoaded; // @synthesize documentLoaded=_documentLoaded;
- (void).cxx_destruct;
- (void)didEndDisplayingPageViewAtIndex:(long long)arg1;
- (id)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentPage;
- (id)initWithFetchCurrentPageBlock:(CDUnknownBlockType)arg1;

@end
