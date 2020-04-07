//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PSPDFDispatchQueue, PSPDFDocumentProvider;
@protocol PSPDFCustomConcurrentQueue;

@interface PSPDFCoreSyncer : NSObject
{
    PSPDFDocumentProvider *_documentProvider;
    unsigned long long _operations;
    PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *_accessQueue;
}

@property(readonly, nonatomic) PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(nonatomic) unsigned long long operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) PSPDFDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
- (void).cxx_destruct;
- (void)syncAnnotations:(id)arg1;
- (id)initWithDocumentProvider:(id)arg1;
- (id)init;

@end
