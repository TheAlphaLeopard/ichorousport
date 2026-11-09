// gml_Script_truestate_clear_history @ 0x14062bad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_truestate_clear_history(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 local_40 [3];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = "gml_Script_truestate_step";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xca;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xcd;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00278);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_48 = 0xd0;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00058);
    if (puVar3 != local_40) {
      local_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      uStack_5c = puVar3[3];
      if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_40);
      }
      FUN_140041b80(local_40,&local_68);
    }
    local_78 = local_40;
    local_68 = (undefined4)DAT_1419df7b0;
    uStack_64 = DAT_1419df7b0._4_4_;
    uStack_60 = DAT_1419df7b8;
    uStack_5c = DAT_1419df7bc;
    if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_30);
    }
    FUN_140041b80(local_30,&local_68);
    local_70 = local_30;
    gml_Script_truestate_begin_step(param_1,param_2,&local_88,2,&local_78);
  }
  else {
    local_48 = 0xce;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00278);
    local_68 = _DAT_141dc6770;
    uStack_64 = uRam0000000141dc6774;
    uStack_60 = uRam0000000141dc6778;
    uStack_5c = uRam0000000141dc677c;
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_68);
    local_78 = local_40;
    FUN_140e63610(param_1,param_2,&local_88,1,uVar2,&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

