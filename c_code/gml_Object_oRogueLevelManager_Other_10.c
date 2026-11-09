// gml_Object_oRogueLevelManager_Other_10 @ 0x140cd9750

undefined8 *
gml_Object_oRogueLevelManager_Other_10
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_98 [32];
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined4 local_58 [3];
  byte local_4c;
  undefined4 *local_38;
  undefined8 *local_30;
  undefined4 *local_28 [2];
  
  local_b0 = "gml_Script_anon@901@gml_Object_oRogueLevelManager_Other_4";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x27;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419eef98);
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x29;
  if (puVar1 != local_78) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_e8);
  }
  local_38 = local_78;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_68) goto LAB_140cd9897;
  }
  local_e8 = *(undefined4 *)param_5;
  uStack_e4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_e0 = *(undefined4 *)(param_5 + 1);
  uStack_dc = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_e8);
LAB_140cd9897:
  local_30 = &local_68;
  uVar2 = CONCAT44(uVar3,DAT_141a01138);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar2,&local_38);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != local_58) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_e8);
  }
  local_28[0] = local_58;
  FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar3,DAT_1419fa1a8),local_28);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

