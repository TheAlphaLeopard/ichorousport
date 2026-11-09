// gml_Script_anon_35153_DefineTrinkets_TRINKETSINIT @ 0x140610f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_35153_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  local_40 = "gml_Script_anon@35153@DefineTrinkets@TRINKETSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x4f0;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x4f1;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar2,DAT_141a0a848,0x80000000,&local_a8,(ulonglong)pcVar4 & 0xffffffffffffff00,0);
  uStack_8c = local_9c;
  uStack_90 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_98 = local_a8;
  }
  else {
    FUN_1400419b0(&local_98,&local_a8);
  }
  FUN_1400462a0(&local_98,uVar1);
  local_88 = (undefined4)local_98;
  uStack_84 = local_98._4_4_;
  uStack_80 = uStack_90;
  uStack_7c = uStack_8c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_30 = local_68;
  local_88 = _DAT_141dc6760;
  uStack_84 = uRam0000000141dc6764;
  uStack_80 = uRam0000000141dc6768;
  uStack_7c = uRam0000000141dc676c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_88);
  local_28 = local_58;
  puVar3 = (undefined8 *)FUN_140e79090(&local_78,2,&local_30);
  if (puVar3 != &local_b8) {
    local_88 = *(undefined4 *)puVar3;
    uStack_84 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_88);
  }
  FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_b8);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

