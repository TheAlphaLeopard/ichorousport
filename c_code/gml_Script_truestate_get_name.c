// gml_Script_truestate_get_name @ 0x14062cd70

undefined8 * gml_Script_truestate_get_name(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_40 [3];
  byte local_34;
  undefined4 local_30 [3];
  byte local_24;
  
  local_50 = "gml_Script_truestate_clear_history";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xf2;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xf7;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fffa8);
  if (puVar1 != local_40) {
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_68);
  }
  local_88 = local_40;
  FUN_140e634e0(param_1,param_2,&local_78,1,CONCAT44(uVar3,DAT_141a00018),&local_88);
  local_48 = 0xf8;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
  if (puVar1 != local_40) {
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_68);
  }
  local_88 = local_40;
  if (puVar2 != local_30) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_30);
    }
    FUN_140041b80(local_30,&local_68);
  }
  local_80 = local_30;
  FUN_140ea9150(2,&local_88);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

