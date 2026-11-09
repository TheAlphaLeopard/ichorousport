// gml_Script_anon_8589_anon_8075____struct___129_JUKEBOX_system @ 0x14039ba20

undefined8 *
gml_Script_anon_8589_anon_8075____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 local_60;
  byte local_54;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_90 = "gml_Script_anon@8316@anon@8075@___struct___129@JUKEBOX_system";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x122;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4a68);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x123;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 == &local_60) goto LAB_14039bb39;
  }
  local_a8 = *(undefined4 *)puVar2;
  uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_a0 = *(undefined4 *)(puVar2 + 1);
  uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_a8);
LAB_14039bb39:
  local_40 = &local_60;
  ppuVar5 = &local_40;
  puVar2 = (undefined8 *)gml_Script_jump_predictor(param_1,param_2,&local_d8,1,ppuVar5);
  if (puVar2 != &local_c8) {
    local_a8 = *(undefined4 *)puVar2;
    uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_a8);
  }
  local_88 = 0x124;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4b28);
  uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f49e8,0x80000000,&local_b8,uVar6,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  local_a8 = (undefined4)local_b8;
  uStack_a4 = local_b8._4_4_;
  uStack_a0 = uStack_b0;
  uStack_9c = uStack_ac;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_a8);
  local_50 = local_80;
  local_48 = &local_c8;
  if (0 < param_4) {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar7,DAT_141a01138),&local_50);
  FUN_140e98ef0(param_1,param_2,uVar3,puVar4,uVar1);
  local_88 = 0x125;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

