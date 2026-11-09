// gml_Script_anon_679_anon_440_speaker_get_profile_speaker_get_profile @ 0x1405151c0

undefined8 *
gml_Script_anon_679_anon_440_speaker_get_profile_speaker_get_profile
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  
  local_50 = "gml_Script_anon@284@anon@115@speaker_get_profile@speaker_get_profile";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xb;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xd;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a8a8);
  local_ac = DAT_141dd3d04;
  local_b0 = DAT_141dd3d00;
  if ((1 << ((byte)DAT_141dd3d04 & 0x1f) & 0x46U) == 0) {
    local_b8 = DAT_141dd3cf8;
  }
  else {
    FUN_1400419b0(&local_b8,&DAT_141dd3cf8);
  }
  uVar3 = 1 << ((byte)local_ac & 0x1f) & 0x46;
  uStack_a0 = local_b0;
  uStack_9c = local_ac;
  if (uVar3 == 0) {
    local_a8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_a8,&local_b8);
  }
  FUN_1400460e0(&local_a8,uVar1);
  local_98 = (undefined4)local_a8;
  uStack_94 = local_a8._4_4_;
  uStack_90 = uStack_a0;
  uStack_8c = uStack_9c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (uVar3 != 0) {
    FUN_140041a50(&local_b8);
  }
  local_40 = local_78;
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_98);
  local_38 = local_68;
  puVar2 = (undefined8 *)gml_Script_worldwide_get_dialogue(param_1,param_2,&local_88,2,&local_40);
  if (puVar2 != param_3) {
    local_98 = *(undefined4 *)puVar2;
    uStack_94 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_90 = *(undefined4 *)(puVar2 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
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

