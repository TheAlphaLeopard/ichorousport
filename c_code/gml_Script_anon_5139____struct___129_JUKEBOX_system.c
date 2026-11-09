// gml_Script_anon_5139____struct___129_JUKEBOX_system @ 0x140397670

undefined8 *
gml_Script_anon_5139____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined1 local_a8 [32];
  undefined4 local_88 [3];
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined4 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_d0 = "gml_Script_anon@4909@___struct___129@JUKEBOX_system";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xb7;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xb8;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4a38);
  if (puVar1 != local_88) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
  }
  local_48 = local_88;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14039778e:
    local_e8 = *(undefined4 *)puVar2;
    uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_e8);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_78) goto LAB_14039778e;
  }
  local_40 = &local_78;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 == &local_68) goto LAB_140397807;
  }
  local_e8 = *(undefined4 *)puVar2;
  uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_e0 = *(undefined4 *)(puVar2 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_e8);
LAB_140397807:
  local_38 = &local_68;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_c0,3,CONCAT44(uVar5,DAT_1419fd6d8),&local_48);
  if (puVar2 != &local_f8) {
    local_e8 = *(undefined4 *)puVar2;
    uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_e8);
  }
  local_c8 = 0xb9;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4d98);
  if (0 < param_4) {
    puVar4 = (undefined8 *)*param_5;
  }
  FUN_140e98ef0(param_1,param_2,uVar3,puVar4,&local_f8);
  local_c8 = 0xba;
  if (&local_f8 != param_3) {
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

