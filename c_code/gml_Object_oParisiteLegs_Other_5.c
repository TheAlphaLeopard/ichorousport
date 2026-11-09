// gml_Object_oParisiteLegs_Other_5 @ 0x140bb4e10

void gml_Object_oParisiteLegs_Other_5(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  int iVar2;
  undefined1 *local_res18;
  undefined4 uVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oParisiteLegs_Destroy_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_28 = 3;
  FUN_140e98b30(param_1,param_2);
  local_28 = 5;
  uStack_4c = 0xf;
  local_58 = 0x1000000000000d7;
  dVar1 = (double)FUN_140e4b060(&local_58);
  iVar2 = FUN_140edd1e0(param_1,param_2,(int)dVar1);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (0 < iVar2) {
    local_28 = 6;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_78 = 0;
    local_70 = 0;
    local_6c = 5;
    uStack_4c = 0xf;
    local_58 = 0x10000020000010c;
    local_48 = 0x10c;
    uStack_44 = 0x1000002;
    uStack_40 = uStack_50;
    uStack_3c = 0xf;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_48);
    local_res18 = local_68;
    FUN_140e634e0(param_1,param_2,&local_78,1,CONCAT44(uVar3,DAT_141a07788),&local_res18);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

