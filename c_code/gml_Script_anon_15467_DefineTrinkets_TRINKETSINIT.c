// gml_Script_anon_15467_DefineTrinkets_TRINKETSINIT @ 0x1405f2390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_15467_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_38 [2];
  
  local_70 = "gml_Script_anon@15066@DefineTrinkets@TRINKETSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x25c;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x25d;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  local_b8 = _DAT_141dc6760;
  uStack_b4 = uRam0000000141dc6764;
  uStack_b0 = uRam0000000141dc6768;
  uStack_ac = uRam0000000141dc676c;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_38[0] = local_50;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar3,DAT_141a0a0d8),local_38);
  uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_a8,puVar2);
  }
  uStack_ac = 7;
  local_b8 = 2;
  FUN_140042560(&local_a8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_a8;
  uStack_b4 = local_a8._4_4_;
  uStack_b0 = uStack_a0;
  uStack_ac = uStack_9c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140e87930(uVar1,DAT_141a0a848,0x80000000,&local_98);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

