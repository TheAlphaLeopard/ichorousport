// gml_Script____struct___703_gml_Object_oPlayerPause_Create_0 @ 0x140c87fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___703_gml_Object_oPlayerPause_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 **ppuVar8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_90 = "gml_Script_anon@1362@___struct___702@gml_Object_oPlayerPause_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x37;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x39;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,DAT_1419f8f58);
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f9038,0x80000000,&local_a8,uVar6,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  local_c8 = (longlong *)local_a8;
  uStack_c0 = uStack_a0;
  uStack_bc = uStack_9c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_c8);
  local_40 = local_70;
  ppuVar8 = &local_40;
  uVar6 = CONCAT44(uVar7,DAT_141a08f88);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar6,ppuVar8);
  if (puVar3 != &local_b8) {
    local_c8 = (longlong *)*puVar3;
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  local_88 = 0x3a;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,DAT_1419f8f58);
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f9038,0x80000000,&local_a8,uVar6,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  local_c8 = (longlong *)local_a8;
  uStack_c0 = uStack_a0;
  uStack_bc = uStack_9c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_c8);
  local_40 = local_70;
  local_c8 = (longlong *)CONCAT44(uRam0000000141dc74c4,_DAT_141dc74c0);
  uStack_c0 = uRam0000000141dc74c8;
  uStack_bc = uRam0000000141dc74cc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_c8);
  local_38 = local_60;
  local_30 = &local_b8;
  ppuVar8 = &local_40;
  uVar6 = CONCAT44(uVar7,DAT_1419fe1d8);
  FUN_140e634e0(param_1,param_2,&local_d8,3,uVar6,ppuVar8);
  local_88 = 0x3c;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8f18);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8e98);
  iVar1 = FUN_140e851f0(uVar2,uVar4,DAT_141955260,1);
  if (iVar1 == -2 || -1 < iVar1) {
    local_88 = 0x3f;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8f18);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  else {
    local_88 = 0x3d;
    uVar2 = (**(code **)(*param_1 + 0x10))();
    FUN_140046040(uVar2);
  }
  local_88 = 0x41;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uStack_bc = 6;
  local_c8 = param_2;
  FUN_140e87440(&local_c8,DAT_1419f9018,0x80000000,&local_80,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e63610(param_2,param_2,&local_d8,0,&local_80,0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

