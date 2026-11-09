// gml_Script___InputMotionSystem @ 0x1400bbcc0

undefined8 *
gml_Script___InputMotionSystem(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  
  local_50 = "gml_Script_anon@1741@anon@376@__InputMotionSystem@__InputMotionSystem";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x2e;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x30;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
  if (puVar1 != local_40) {
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_88);
  }
  local_78 = local_40;
  FUN_140e645a0(&local_88,gml_Script_anon_376___InputMotionSystem___InputMotionSystem,param_1);
  local_68 = local_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_68);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_70 = local_30;
  FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar2,DAT_141a01f58),&local_78);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

