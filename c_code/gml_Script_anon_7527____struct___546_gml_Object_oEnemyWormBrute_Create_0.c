// gml_Script_anon_7527____struct___546_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a98210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7527____struct___546_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar11;
  longlong **pplVar9;
  ulonglong uVar10;
  longlong **pplVar12;
  ulonglong uVar13;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  byte local_11c;
  longlong local_118;
  byte local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong local_f8;
  byte local_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_80 = "gml_Script_anon@6897@___struct___546@gml_Object_oEnemyWormBrute_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x124;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_4c = 0xffffff;
  local_58 = 0;
  plVar4 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f2348);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_12c = 0;
  local_138 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x125;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f23f8);
  uStack_13c = 0xd;
  local_148 = (longlong *)0x3ff0000000000000;
  if (&local_148 != puVar5) {
    local_e8 = (longlong *)0x3ff0000000000000;
    uStack_e0 = uStack_140;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  local_78 = 0x126;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_b8);
  local_78 = 0x127;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  iVar2 = FUN_140e4a740(uVar6);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar7 != &local_128) {
    local_148 = (longlong *)*plVar7;
    uStack_140 = (undefined4)plVar7[1];
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_a8 = &local_128;
  iVar2 = FUN_140e4a740(uVar6);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar8 != &local_118) {
    local_148 = (longlong *)*plVar8;
    uStack_140 = (undefined4)plVar8[1];
    uStack_13c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  local_a0 = &local_118;
  local_148 = (longlong *)CONCAT44(uRam0000000141dd90ec,_DAT_141dd90e8);
  uStack_140 = uRam0000000141dd90f0;
  uStack_13c = DAT_141dd90f4;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_98 = &local_108;
  uStack_13c = 0xf;
  local_148 = (longlong *)0x100000000000082;
  local_e8 = (longlong *)0x100000000000082;
  uStack_e0 = uStack_140;
  uStack_dc = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_e8);
  local_90 = &local_f8;
  pplVar12 = &local_a8;
  plVar8 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_138,4,CONCAT44(uVar11,DAT_141a0a7c8),pplVar12);
  if (plVar8 != &local_c8) {
    local_148 = (longlong *)*plVar8;
    uStack_140 = (undefined4)plVar8[1];
    uStack_13c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar6,DAT_141a06528,0x80000000,&local_c8);
  local_78 = 0x129;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_148 = (longlong *)CONCAT44(uRam00000001419eb2a4,_DAT_1419eb2a0);
  uStack_140 = uRam00000001419eb2a8;
  uStack_13c = uRam00000001419eb2ac;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  local_a8 = &local_128;
  local_148 = (longlong *)CONCAT44(uRam00000001419eb2a4,_DAT_1419eb2a0);
  uStack_140 = uRam00000001419eb2a8;
  uStack_13c = uRam00000001419eb2ac;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_a0 = &local_118;
  local_108 = FUN_140e79480(0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_98 = &local_108;
  local_148 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_140 = uRam00000001419df7c8;
  uStack_13c = uRam00000001419df7cc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  local_90 = &local_f8;
  pplVar9 = &local_a8;
  FUN_14044e5b0(param_1,param_2,&local_138,4,pplVar9);
  local_78 = 0x12a;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar13 = (ulonglong)pplVar12 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pplVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ef148,0x80000000,&local_58,uVar10,uVar13);
  uStack_dc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_68,uVar10,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_148,gml_Script_anon_7165____struct___546_gml_Object_oEnemyWormBrute_Create_0,
                0);
  if (&local_148 != plVar4) {
    local_e8 = local_148;
    uStack_e0 = uStack_140;
    uStack_dc = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar4);
    }
    FUN_140041b80(plVar4,&local_e8);
  }
  FUN_140e60910(1);
  if (plVar4 != &local_128) {
    local_e8 = (longlong *)*plVar4;
    uStack_e0 = (undefined4)plVar4[1];
    uStack_dc = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_e8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_a8 = &local_128;
  local_148 = (longlong *)local_68;
  uStack_140 = uStack_60;
  uStack_13c = uStack_5c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_a0 = &local_118;
  local_148 = (longlong *)local_58;
  uStack_140 = uStack_50;
  uStack_13c = uStack_4c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_98 = &local_108;
  plVar4 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar11,DAT_1419fd6d8),&local_a8);
  if (plVar4 != &local_f8) {
    local_148 = (longlong *)*plVar4;
    uStack_140 = (undefined4)plVar4[1];
    uStack_13c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  local_90 = &local_f8;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_138,2,&local_98);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

