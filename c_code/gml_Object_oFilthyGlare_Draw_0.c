// gml_Object_oFilthyGlare_Draw_0 @ 0x140ad2040

undefined8 *
gml_Object_oFilthyGlare_Draw_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong **in_stack_fffffffffffffed0;
  ulonglong uVar14;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  uint uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38;
  
  local_100 = "gml_Script_anon@496@gml_Object_oFilthyGlare_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x12;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_7c = 0;
  local_88 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x13;
  plVar4 = (longlong *)FUN_140e8da20(&local_88,local_res8,0);
  if (plVar4 != &local_118) {
    local_128 = (longlong *)*plVar4;
    uStack_120 = (undefined4)plVar4[1];
    uStack_11c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_128);
  }
  local_f8 = 0x14;
  local_d4 = 0xf;
  local_e0 = 0x10000000000009d;
  iVar3 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_e0);
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if (0 < iVar3) {
    do {
      local_f8 = 0x15;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_d4 = 10;
      local_e0 = 0;
      iVar3 = FUN_140e851f0(uVar5,&local_e0,DAT_141955260,0);
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      if (iVar3 == 0) {
        local_f8 = 0x16;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
        local_8c = 10;
        local_98 = 0;
        iVar3 = FUN_140e851f0(uVar5,&local_98,DAT_141955260,0);
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        if (iVar3 == 0) {
          local_f8 = 0x16;
        }
        else {
          local_f8 = 0x17;
          if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f0);
          }
          local_f0 = 0;
          local_e8 = 0;
          local_e4 = 5;
          uStack_11c = 6;
          local_128 = local_res8;
          uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_128,DAT_141a0a828,0x80000000,&local_a8,uVar12,
                        (ulonglong)in_stack_fffffffffffffed0 & 0xffffffffffffff00);
          uVar13 = (undefined4)(uVar12 >> 0x20);
          if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_78 = &local_118;
          local_b8 = (undefined4)local_a8;
          uStack_b4 = local_a8._4_4_;
          uStack_b0 = uStack_a0;
          uStack_ac = uStack_9c;
          if ((1 << (local_58[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_58);
          }
          FUN_140041b80(local_58,&local_b8);
          in_stack_fffffffffffffed0 = &local_78;
          pcVar11 = (code *)CONCAT44(uVar13,DAT_1419fe568);
          local_70 = local_58;
          FUN_140e634e0(local_res8,local_res10,&local_f0,2,pcVar11,in_stack_fffffffffffffed0);
        }
      }
      else {
        local_f8 = 0x15;
      }
      cVar2 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  if (((uStack_10c == 2) && (local_118 != 0)) && (*(int *)(local_118 + 0x24) != 0)) {
    local_f8 = 0x1d;
    plVar4 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
    FUN_140e609c0(local_res8);
    iVar3 = 0;
    if ((uStack_10c == 2) && (local_118 != 0)) {
      iVar3 = *(int *)(local_118 + 0x24);
    }
    dVar1 = (double)FUN_140e78f00((longlong)(iVar3 + -1));
    iVar3 = (int)dVar1;
    plVar10 = (longlong *)0x0;
    if (((uStack_10c & 0xffffff) == 2) && (local_118 != 0)) {
      if ((iVar3 < 0) || (*(int *)(local_118 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(local_118 + 0x24));
      }
      else {
        plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_118 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar10 = &local_118;
    }
    if (plVar10 != plVar4) {
      local_b8 = (undefined4)*plVar10;
      uStack_b4 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_b0 = (undefined4)plVar10[1];
      uStack_ac = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar4);
      }
      FUN_140041b80(plVar4,&local_b8);
    }
    FUN_140e60910(1);
    local_f8 = 0x1e;
    puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a58be0);
    puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f2bb8);
    FUN_140e609c0(local_res8);
    if (puVar6 != puVar7) {
      local_b8 = *puVar6;
      uStack_b4 = puVar6[1];
      uStack_b0 = puVar6[2];
      uStack_ac = puVar6[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_b8);
    }
    FUN_140e60910(1);
    local_f8 = 0x1f;
    pplVar8 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f2b98);
    uStack_11c = 0xd;
    local_128 = (longlong *)0x3ff0000000000000;
    if (&local_128 != pplVar8) {
      local_b8 = 0;
      uStack_b4 = 0x3ff00000;
      uStack_b0 = uStack_120;
      uStack_ac = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar8);
      }
      FUN_140041b80(pplVar8,&local_b8);
    }
    local_f8 = 0x21;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    uVar14 = (ulonglong)in_stack_fffffffffffffed0 & 0xffffffffffffff00;
    uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a57c50,0x80000000,&local_d0,uVar12,uVar14);
    uStack_11c = 10;
    local_128 = (longlong *)0x3;
    iVar3 = FUN_140e851f0(&local_d0,&local_128,DAT_141955260,0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar3 == 0) {
      local_f8 = 0x22;
      puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419efca8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0x3f8eb851eb851eb8;
    }
    else {
      local_f8 = 0x23;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      FUN_140e87440(uVar5,DAT_141a57c50,0x80000000,&local_d0,uVar12 & 0xffffffffffffff00,
                    uVar14 & 0xffffffffffffff00);
      uStack_11c = 10;
      local_128 = (longlong *)0x2;
      iVar3 = FUN_140e851f0(&local_d0,&local_128,DAT_141955260,0);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if (iVar3 == 0) {
        local_f8 = 0x24;
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))();
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        *puVar9 = 0x3fa999999999999a;
      }
      else {
        local_f8 = 0x26;
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419efca8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        *puVar9 = 0x3fc3333333333333;
      }
    }
  }
  else {
    local_f8 = 0x1a;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    local_f8 = 0x1b;
  }
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

