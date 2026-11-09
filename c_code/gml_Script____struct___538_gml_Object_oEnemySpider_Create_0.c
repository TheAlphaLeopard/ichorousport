// gml_Script____struct___538_gml_Object_oEnemySpider_Create_0 @ 0x140a85f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___538_gml_Object_oEnemySpider_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_c0 = "gml_Script_anon@3841@___struct___538@gml_Object_oEnemySpider_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xc5;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 199;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar4;
  }
  else {
    uVar7 = FUN_140e4b060(puVar4);
  }
  dVar1 = (double)FUN_140e78d00(uVar7);
  if (dVar1 == 0.0) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
    uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_60,uVar9,in_stack_ffffffffffffff10);
    uStack_cc = 0;
    local_d8 = 0x403e000000000000;
    uVar2 = FUN_140e851f0(&local_60,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (uVar2 < 0x80000000) {
      local_b8 = 0xc9;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_70,uVar9 & 0xffffffffffffff00,
                    in_stack_ffffffffffffff10 & 0xffffffffffffff00);
      local_d8 = CONCAT44(uRam0000000141dd8ffc,_DAT_141dd8ff8);
      uStack_d0 = uRam0000000141dd9000;
      uStack_cc = DAT_141dd9004;
      if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_d8);
      local_50 = &local_a0;
      uVar3 = FUN_140069500(uVar3);
      FUN_140e63610(uVar3,param_2,&local_e8,1,&local_70,&local_50);
      local_b8 = 0xca;
      goto LAB_140a8646c;
    }
  }
  local_b8 = 0xcd;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar4 != &local_a0) {
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_d8);
  }
  local_50 = &local_a0;
  local_d8 = CONCAT44(uRam0000000141dc6fd4,_DAT_141dc6fd0);
  uStack_d0 = uRam0000000141dc6fd8;
  uStack_cc = uRam0000000141dc6fdc;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_48 = local_90;
  local_d8 = CONCAT44(uRam00000001419eb164,_DAT_1419eb160);
  uStack_d0 = uRam00000001419eb168;
  uStack_cc = uRam00000001419eb16c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_40 = local_80;
  FUN_140e609c0(param_1);
  ppuVar10 = &local_50;
  puVar4 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_e8,3,ppuVar10);
  if (puVar4 != puVar6) {
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0xcf;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_b0,(ulonglong)ppuVar10 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  FUN_1400460e0(&local_b0,uVar3);
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_b0);
  local_b8 = 0xd1;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_e8,0,uVar3,0);
  local_b8 = 0xd2;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_e8,0,uVar3,0);
LAB_140a8646c:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

