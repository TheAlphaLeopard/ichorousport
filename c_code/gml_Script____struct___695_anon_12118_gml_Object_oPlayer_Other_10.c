// gml_Script____struct___695_anon_12118_gml_Object_oPlayer_Other_10 @ 0x140c70e70

undefined8 *
gml_Script____struct___695_anon_12118_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *local_res18 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_anon@11295@gml_Object_oPlayer_Other_10";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x1f0;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x1f2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a738);
  puVar2 = (undefined8 *)FUN_14018a720(&local_b8,puVar1,100);
  uVar6 = 0;
  uVar4 = 0xffffff;
  if (puVar2 != &local_98) {
    local_88 = *(undefined4 *)puVar2;
    uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
    FUN_140041b80(&local_98,&local_88);
    uVar6 = local_98;
    uVar4 = local_8c;
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_58 = 499;
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar1;
  }
  else {
    uVar7 = FUN_140e4b060(puVar1);
  }
  uVar3 = FUN_1412a79b0(uVar7,0x4059000000000000);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_58 = 0x1f5;
  local_a8 = uVar3;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_res18[0] = &local_a8;
  uVar3 = gml_Script_choose_weighted(param_1,param_2,&local_c8,1,local_res18);
  uStack_b0 = local_90;
  uVar5 = 1 << ((byte)uVar4 & 0x1f) & 0x46;
  uStack_ac = uVar4;
  if (uVar5 == 0) {
    local_b8 = uVar6;
  }
  else {
    FUN_1400419b0(&local_b8,&local_98);
  }
  FUN_1400460e0(&local_b8,uVar3);
  if (&local_b8 != param_3) {
    local_88 = (undefined4)local_b8;
    uStack_84 = local_b8._4_4_;
    uStack_80 = uStack_b0;
    uStack_7c = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_88);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (uVar5 != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

