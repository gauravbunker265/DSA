#include<bits/stdc++.h>
using namespace std;
int main(){
        map<vector<string>,pair<int,int>> data={
        {{"Electronics","Clothing"},{10,50}},
        {{"Home","Kitchen"}, {80,30}},
        {{"Books","Toys"}, {40,100}},
        {{"Sports","Fitness"}, {150,20}},
        {{"Beauty","Health"}, {60,70}},
        {{"Automotive","Tools"}, {120,40}},
        {{"Garden","Outdoor"}, {90,35}},
        {{"Jewelry","Accessories"}, {200,15}},
        {{"Office Supplies","Crafts"}, {50,60}},
        {{"Pets","Baby Products"}, {30,80}}
    };
    cout<<left<<setw(15)<<"product_categories"<<right<<setw(35)<<"price"<<right<<setw(30)<<"stock_Quantity"<<endl<<endl;
    for(auto it :data){
        for(auto i : it.first){
            cout<<left<<setw(15)<<i<<" ";
        }
        cout<<right<<setw(20)<<it.second.first<<right<<setw(20)<<it.second.second<<endl;
    }
    return 0;
}