// gml_Script_anon_3698_Attribute_OFFERINGSINIT @ 0x1403c1e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3698_Attribute_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_50 = "gml_Script_anon@3481@Attribute@OFFERINGSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x7d;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x7f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6288);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a8a8);
  local_9c = DAT_141dd25d4;
  local_a0 = DAT_141dd25d0;
  if ((1 << ((byte)DAT_141dd25d4 & 0x1f) & 0x46U) == 0) {
    local_a8 = DAT_141dd25c8;
  }
  else {
    FUN_1400419b0(&local_a8,&DAT_141dd25c8);
  }
  local_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_c0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_c8,puVar1);
  }
  FUN_1400460e0(&local_c8,uVar2);
  uStack_ac = local_bc;
  uStack_b0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_b8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_b8,&local_c8);
  }
  FUN_1400460e0(&local_b8,&local_a8);
  local_98 = (undefined4)local_b8;
  uStack_94 = local_b8._4_4_;
  uStack_90 = uStack_b0;
  uStack_8c = uStack_ac;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_40 = local_78;
  local_98 = _DAT_141dd2758;
  uStack_94 = uRam0000000141dd275c;
  uStack_90 = uRam0000000141dd2760;
  uStack_8c = DAT_141dd2764;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_98);
  local_38 = local_68;
  puVar1 = (undefined8 *)gml_Script_worldwide_get_dialogue(param_1,param_2,&local_88,2,&local_40);
  if (puVar1 != param_3) {
    local_98 = *(undefined4 *)puVar1;
    uStack_94 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_90 = *(undefined4 *)(puVar1 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

