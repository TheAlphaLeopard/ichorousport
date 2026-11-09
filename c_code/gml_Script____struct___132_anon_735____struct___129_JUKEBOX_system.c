// gml_Script____struct___132_anon_735____struct___129_JUKEBOX_system @ 0x140391fa0

undefined8 *
gml_Script____struct___132_anon_735____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  undefined8 **ppuVar3;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  
  local_60 = "gml_Script_anon@513@___struct___129@JUKEBOX_system";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x17;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x18;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f49e8);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_98) goto LAB_1403920a5;
  }
  local_d8 = *(undefined4 *)param_5;
  uStack_d4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_d0 = *(undefined4 *)(param_5 + 1);
  uStack_cc = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_d8);
LAB_1403920a5:
  local_48 = &local_98;
  if (puVar1 != local_88) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_d8);
  }
  local_40 = local_88;
  ppuVar3 = &local_48;
  puVar1 = (undefined4 *)gml_Script_jump_predictor(param_1,param_2,&local_c8,1,ppuVar3);
  uVar4 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
  if (puVar1 != local_78) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
  }
  local_38 = local_78;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar4,DAT_141a01138),&local_40);
  if (puVar2 != param_3) {
    local_d8 = *(undefined4 *)puVar2;
    uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

