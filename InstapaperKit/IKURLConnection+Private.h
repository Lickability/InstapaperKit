//
//  IKURLConnection+Private.h
//  InstapaperKit
//
//  Copyright (c) 2011 Matthias Plappert <matthiasplappert@me.com>
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software
//  and associated documentation files (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge, publish, distribute,
//  sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all copies or
//  substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
//  BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
//  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>
#import "IKURLConnection.h"


typedef enum {
    IKURLConnectionTypeUnknown = -1,
    
    IKURLConnectionTypeAuthAccessToken,
    IKURLConnectionTypeAuthVerifyCredentials,
    
    IKURLConnectionTypeBookmarksList,
    IKURLConnectionTypeBookmarksUpdateReadProgress,
    IKURLConnectionTypeBookmarksAdd,
    IKURLConnectionTypeBookmarksDelete,
    IKURLConnectionTypeBookmarksStar,
    IKURLConnectionTypeBookmarksUnstar,
    IKURLConnectionTypeBookmarksArchive,
    IKURLConnectionTypeBookmarksUnarchive,
    IKURLConnectionTypeBookmarksMove,
    IKURLConnectionTypeBookmarksText,
    
    IKURLConnectionTypeFoldersList,
    IKURLConnectionTypeFoldersAdd,
    IKURLConnectionTypeFoldersDelete,
    IKURLConnectionTypeFoldersOrder
} IKURLConnectionType;


@interface IKURLConnection (Private)

- (void)_appendData:(NSData *)data;
- (void)_setUserInfo:(id)userInfo;
- (void)_setResponse:(NSHTTPURLResponse *)response;

- (void)_setType:(IKURLConnectionType)type;
- (IKURLConnectionType)_type;
- (void)_setContext:(id)context;
- (id)_context;

@end