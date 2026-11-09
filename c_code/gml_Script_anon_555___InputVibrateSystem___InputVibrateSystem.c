// gml_Script_anon_555___InputVibrateSystem___InputVibrateSystem @ 0x1400eb490

undefined8 *
gml_Script_anon_555___InputVibrateSystem___InputVibrateSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  local_50 = "gml_Script_anon@1714@anon@555@__InputVibrateSystem@__InputVibrateSystem";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x31;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x33;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fed38);
  if (puVar1 != local_40) {
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_78);
  }
  local_88 = local_40;
  FUN_140e645a0(&local_78,gml_Script_anon_1714_anon_555___InputVibrateSystem___InputVibrateSystem,
                param_1);
  local_68 = local_78;
  uStack_64 = uStack_74;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_68);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_80 = local_30;
  uVar2 = CONCAT44(uVar3,DAT_141a01f58);
  FUN_140e634e0(param_1,param_2,&local_98,2,uVar2,&local_88);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48 = 0x38;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
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
  FUN_140e645a0(&local_78,gml_Script_anon_2188_anon_555___InputVibrateSystem___InputVibrateSystem,
                param_1);
  local_68 = local_78;
  uStack_64 = uStack_74;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_68);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_80 = local_30;
  FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar3,DAT_141a01f58),&local_88);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

