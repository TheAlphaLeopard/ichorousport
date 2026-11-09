// gml_Script____struct___570_gml_Object_oFirework_Step_0 @ 0x140ad3e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___570_gml_Object_oFirework_Step_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  double *pdVar5;
  longlong **pplVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong **in_stack_fffffffffffffea0;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  uint uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong local_d8;
  byte local_cc;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_130 = "gml_Object_oFirework_Create_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar10 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_d8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_128 = 2;
  local_7c = 0;
  local_88 = 0;
  FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_88);
  local_128 = 3;
  uVar7 = FUN_140e78f00(4);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = uVar7;
  FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_e8);
  local_128 = 5;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6098);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_128 = 6;
  pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
  FUN_140e609c0(local_res8);
  dVar1 = (double)FUN_140e794b0(0,0x404e000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar5);
  }
  *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
  *pdVar5 = dVar1 + 90.0;
  FUN_140e60910(1);
  local_128 = 7;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f290);
  uVar7 = FUN_140e794b0(0,0x400c000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = uVar7;
  local_128 = 8;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f2c18);
  uVar7 = FUN_140e78f40(0xf);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = uVar7;
  local_128 = 9;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  pplVar6 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f2c08);
  local_118 = (longlong *)CONCAT44(uRam00000001419eb534,_DAT_1419eb530);
  uStack_110 = uRam00000001419eb538;
  uStack_10c = uRam00000001419eb53c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_118);
  local_b8 = &local_d8;
  local_118 = (longlong *)CONCAT44(uRam00000001419eb524,_DAT_1419eb520);
  uStack_110 = uRam00000001419eb528;
  uStack_10c = uRam00000001419eb52c;
  if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  local_b0 = local_c8;
  FUN_140e609c0(local_res8);
  uVar7 = FUN_140e78db0(&local_108,2,&local_b8);
  local_158 = (longlong *)FUN_140e794b0(0,0x4034000000000000);
  uStack_14c = 0;
  local_res18 = 1;
  FUN_140042560(&local_158,uVar7);
  if (&local_158 != pplVar6) {
    local_118 = local_158;
    uStack_110 = uStack_150;
    uStack_10c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_118);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_128 = 0xb;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0xc010000000000000;
  local_128 = 0xc;
  plVar8 = (longlong *)FUN_140e8da20(&local_108,local_res8,0);
  if (plVar8 != &local_148) {
    local_118 = (longlong *)*plVar8;
    uStack_110 = (undefined4)plVar8[1];
    uStack_10c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_118);
  }
  local_128 = 0xd;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x10000000000009d;
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (0 < iVar3) {
    do {
      local_128 = 0xf;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      uStack_14c = 10;
      local_158 = (longlong *)0x2;
      iVar3 = FUN_140e851f0(uVar7,&local_158,DAT_141955260,0);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if (iVar3 == 0) {
        local_128 = 0xf;
      }
      else {
        local_128 = 0x10;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
        local_8c = 0;
        local_98 = 0;
        iVar3 = FUN_140e851f0(uVar7,&local_98,DAT_141955260,1);
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        if (iVar3 == -2 || 0 < iVar3) {
          local_128 = 0x11;
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          local_f8 = 0;
          local_f0 = 0;
          local_ec = 5;
          uStack_10c = 6;
          local_118 = local_res8;
          uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_118,DAT_141a0a828,0x80000000,&local_a8,uVar11,
                        (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
          uVar12 = (undefined4)(uVar11 >> 0x20);
          if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_b8 = &local_148;
          local_78 = (undefined4)local_a8;
          uStack_74 = local_a8._4_4_;
          uStack_70 = uStack_a0;
          uStack_6c = uStack_9c;
          if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_78);
          local_b0 = local_c8;
          in_stack_fffffffffffffea0 = &local_b8;
          pcVar10 = (code *)CONCAT44(uVar12,DAT_1419fe568);
          FUN_140e634e0(local_res8,local_res10,&local_f8,2,pcVar10,in_stack_fffffffffffffea0);
        }
        else {
          local_128 = 0x10;
        }
      }
      cVar2 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  local_128 = 0x13;
  if (((uStack_13c == 2) && (local_148 != 0)) && (0 < *(int *)(local_148 + 0x24))) {
    local_128 = 0x14;
    plVar8 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
    FUN_140e609c0(local_res8);
    iVar3 = 0;
    if ((uStack_13c == 2) && (local_148 != 0)) {
      iVar3 = *(int *)(local_148 + 0x24);
    }
    dVar1 = (double)FUN_140e78f00((longlong)(iVar3 + -1));
    iVar3 = (int)dVar1;
    plVar9 = (longlong *)0x0;
    if (((uStack_13c & 0xffffff) == 2) && (local_148 != 0)) {
      if ((iVar3 < 0) || (*(int *)(local_148 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(local_148 + 0x24));
      }
      else {
        plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_148 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar9 = &local_148;
    }
    if (plVar9 != plVar8) {
      local_78 = (undefined4)*plVar9;
      uStack_74 = *(undefined4 *)((longlong)plVar9 + 4);
      uStack_70 = (undefined4)plVar9[1];
      uStack_6c = *(undefined4 *)((longlong)plVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_78);
    }
    FUN_140e60910(1);
  }
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

