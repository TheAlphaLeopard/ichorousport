// gml_Script____struct___702_gml_Object_oPlayerPause_Create_0 @ 0x140c87b30

undefined8 *
gml_Script____struct___702_gml_Object_oPlayerPause_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 **ppuVar8;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 local_60 [12];
  byte local_54;
  
  local_90 = "gml_Script_anon@1057@___struct___702@gml_Object_oPlayerPause_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x2a;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x2c;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,DAT_1419f8f58);
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f9038,0x80000000,&local_a8,uVar6,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  local_d8 = local_a8;
  uStack_d0 = uStack_a0;
  uStack_cc = uStack_9c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_d8);
  local_70 = local_60;
  ppuVar8 = &local_70;
  uVar6 = CONCAT44(uVar7,DAT_141a0a9e8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar6,ppuVar8);
  if (puVar3 != &local_b8) {
    local_d8 = (longlong *)*puVar3;
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  local_88 = 0x2d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,DAT_1419f8f58);
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f9038,0x80000000,&local_a8,uVar6,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  local_d8 = local_a8;
  uStack_d0 = uStack_a0;
  uStack_cc = uStack_9c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_d8);
  local_70 = local_60;
  local_68 = &local_b8;
  ppuVar8 = &local_70;
  uVar6 = CONCAT44(uVar7,DAT_1419fe568);
  FUN_140e634e0(param_1,param_2,&local_c8,2,uVar6,ppuVar8);
  local_88 = 0x2f;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8f18);
  uStack_cc = 0;
  local_d8 = (longlong *)0x0;
  iVar1 = FUN_140e851f0(uVar2,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar1 < 1) {
    local_88 = 0x32;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8e98);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8f18);
    FUN_140e609c0(param_1);
    if (puVar3 != puVar4) {
      local_d8 = (longlong *)*puVar3;
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_d8);
    }
    FUN_140e60910(1);
  }
  else {
    local_88 = 0x30;
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8f18);
    FUN_1400bdd80(uVar2);
  }
  local_88 = 0x34;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uStack_cc = 6;
  local_d8 = param_2;
  FUN_140e87440(&local_d8,DAT_1419f9018,0x80000000,&local_80,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e63610(param_2,param_2,&local_c8,0,&local_80,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
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
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

