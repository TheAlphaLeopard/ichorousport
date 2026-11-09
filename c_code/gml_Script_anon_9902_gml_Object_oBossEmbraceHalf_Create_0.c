// gml_Script_anon_9902_gml_Object_oBossEmbraceHalf_Create_0 @ 0x140768b80

longlong **
gml_Script_anon_9902_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,longlong **param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  undefined8 *local_res18;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_60 = "gml_Script_anon@9640@gml_Object_oBossEmbraceHalf_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x136;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_44 = 0;
  local_50 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (longlong *)0x0;
  local_58 = 0x137;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar5 != &local_88) {
    local_c8 = (longlong *)*puVar5;
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  local_res18 = &local_88;
  ppuVar10 = &local_res18;
  uVar8 = CONCAT44(uVar9,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_50,1,uVar8,ppuVar10);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    local_58 = 0x137;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = (longlong *)0xc010000000000000;
  }
  else {
    local_58 = 0x138;
    uStack_bc = 6;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_141a0a828,0x80000000,&local_78,uVar8,uVar11);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a07088,0x80000000,&local_b8,uVar8,uVar11);
    iVar4 = FUN_140e851f0(&local_78,&local_b8,DAT_141955260,0);
    if (iVar4 == 0) {
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
      FUN_140e87440(uVar6,DAT_141a06c38,0x80000000,&local_a8,uVar8 & 0xffffffffffffff00,
                    uVar11 & 0xffffffffffffff00);
      uStack_bc = local_9c;
      uStack_c0 = local_a0;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
        local_c8 = local_a8;
      }
      else {
        FUN_1400419b0(&local_c8,&local_a8);
      }
      pplVar7 = &local_c8;
    }
    else {
      local_8c = local_ac;
      local_90 = local_b0;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
        local_98 = local_b8;
      }
      else {
        FUN_1400419b0(&local_98,&local_b8);
      }
      pplVar7 = &local_98;
      bVar2 = false;
      bVar1 = true;
    }
    if (pplVar7 != param_3) {
      local_40 = *(undefined4 *)pplVar7;
      uStack_3c = *(undefined4 *)((longlong)pplVar7 + 4);
      uStack_38 = *(undefined4 *)(pplVar7 + 1);
      uStack_34 = *(undefined4 *)((longlong)pplVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_40);
    }
    if (bVar1) {
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
    }
    if ((bVar2) && ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_c8);
    }
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

