#include <bits/stdc++.h>
using namespace std;
int n, m, w[2002]={0}, v[2002]={0};
int s[2002][2002];
void nhap(){
    cin >> m >> n;
    for(int i = 1; i <=n; i++){
        cin>>w[i];
        cin>>v[i];
    }
}
int khoiluongmax(){
    for(int i = 0; i <=m; i++){
        s[0][i] =0;
    }
    for(int i = 1; i <=n; i++){
        for(int j=1;j<=m; j++){
            s[i][j] = s[i-1][j];
            if(j>=w[i]) s[i][j] =max(s[i][j],s[i-1][j-w[i]]+v[i]);
        }
    }
    return s[n][m];
}
int main() {
    nhap();
    int tmp=khoiluongmax();
    cout <<tmp <<endl;
    return 0;
}
// .....................................................................................
                                                                                     
//                  ..                                                                  
//           .~.   ^GY                             .^: ..                               
//        ^. 7BY5!  Y#~      :^            ..::^^!!!~J:!~                               
//    .~~!GG7PY.^G7 .57      .^ ^7!~:. ~?~~~!77!~~~^:~!~~.                .             
//   .5J75^?5?GY7?G!  !7:!~^:. .?~^!!7!~?!^!!!~~!!!!7^?~: :         .^^^~~!?.           
//    !5~7Y:PB!PP:~B~ !?.:7!!7!!7?!~!?7!7J!7^~777~^~?^!?      .::^!~!!!~~^.!?           
//     ~P!75^?P^Y5?J:     ^7^:^!~~?77?JJ!?~7~~???!~~7^^Y!!77!!?7!~^~7??77~~:J.          
//      :5YP:7J. ..   :^^~7!:^~:...7!~~!??^7~~!7!~~~?~~J!7?7~~~~~!JYYJ???7~:J:          
//       .^.     :!: .^~!7!:7!          .?!!^!7!7!^~7~!7!?7~~~~~!JYYYJJ??7~.?~          
//                       :~7!.          .!~~~~!!7!~!!^7~^J7!!!7!~!!77??777~.5~          
//             .^   :~. .7?^                7^!7~~^!7^7^:^~7JYY?!~~^^^~!7!^^P^          
//                     ~J?^...            :~!^~7~~^7!^?::!?77J?!!!~~^^^:!!:~5^          
//                   .?Y!:^^::..          :7!~!!~~~7~~?.~Y~~!7!!!!!~~~~^^^.JY.          
//                  .JY?7!~~~^^:... .  ...:7?!?77~!!^7!!7J^~~~~~!!!!!!!!~^^5?           
//                 :J7~77?7!!~~~^::..^?Y7!~~~!7!~^!^!~ :~J~:^~~~~!!!!!!!!!7Y5:.^:       
//           :~~: .J?~7777777!~~~^^::5J7!!~~^~!!~^~7!:^^^~~~~~~!~~!!!!!!7??JPJ.7~.      
//        .~!~:  :J5J?!!!!!!!!!~~^^:7557^:   ..:^^!!!.Y55PPPPP55~.7!~!!!!!~!?P~^^       
//       ^!^   ^7P5~~~~~!!!~~~~~^^::J!^:::!^::^:   .~:^?55PPP5J~:~!~~~!!!!?JYP?..       
//       .   ~?!7P7~~~~~!!!~~~~~^:.!7. . .~!7!~^     :^^^~^~^^^^^:::^~!!!!77?PJ         
//         ^J!. Y5J?!!~~!!~~~~~^^:.J:      ~:              .....:^^^^~~!~~~~7P!         
//        !J:  ^J~!7???777!~~~^^^:.J^    :^7.           .....::^^~~~!!7777??55^         
//       ^J.   7Y~~!!77777!!~~~^^:.!?    . ^.          .......::^~~!!!7?JJJYP~          
//       7^   .Y5~!!!!!!!!~~~~~^:. :Y.                   .:::.::~~~!!!!!!~JP7           
//       ^.    J5~!!!!~!!!~~~~^^..  J?                      ..:^~!!!~~~~!YP7            
//             !5!!!!!!!!!~~~^^:.   :J?.                    ..:^~~!7???JP5^             
//             ^YY777!!!!!!~^^:..     !?:                  ..:^^^^^^~JPJ^.              
//              75????????7!^:...      .^^:.           ....:^^^~!!!?5B?.                
//              ^5J~!!!!77!~::..          ..         ...::::^~~!!~~~~JPJ.               
//               !57~~~~!~^^:..                         ...:^^~~~~^~~!JPY^              
//               :JY~~~!!~^::..                           .:^~~~~!!7??775P~             
//                ^5?^~~~^:...                           .:^~!!!!77!!!~~~Y5^            
//                .J5!^^^:..                             .^^~~~!!!!!!~!!!?PY.           
//                 ~Y7::...                             .:^~!!!!!!!!!!7?JJJ57     
