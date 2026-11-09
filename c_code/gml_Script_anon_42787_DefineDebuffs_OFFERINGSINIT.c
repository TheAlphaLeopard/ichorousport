// gml_Script_anon_42787_DefineDebuffs_OFFERINGSINIT @ 0x140402b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_42787_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar11;
  ulonglong uVar10;
  longlong **pplVar12;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  longlong local_188;
  uint uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  longlong local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_170 = "gml_Script_anon@42120@DefineDebuffs@OFFERINGSINIT";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x6d4;
  uVar11 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  bVar8 = 0xff;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x6d6;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000a6;
  local_118 = 0x1000000000000a6;
  uStack_110 = uStack_150;
  uStack_10c = 0xf;
  if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_118);
  local_98 = &local_e8;
  pplVar12 = &local_98;
  uVar10 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_c8,1,uVar10,pplVar12);
  cVar4 = FUN_140e491e0(uVar6);
  if (cVar4 != '\0') {
    local_168 = 0x6d7;
    local_18c = 0xf;
    local_198 = 0x1000000000000a6;
    iVar5 = FUN_140e63cb0(&local_148,&local_res8,&local_res10,&local_198);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (0 < iVar5) {
      do {
        local_168 = 0x6d7;
        FUN_140edd0e0(local_res8,local_res10,0,0);
        cVar4 = FUN_140e643f0(&local_148,&local_res8);
      } while (cVar4 != '\0');
    }
    FUN_140e63970(&local_148,&local_res8,&local_res10);
    if (local_138 != 0) {
      FUN_140e4cd60();
    }
  }
  local_168 = 0x6d9;
  plVar7 = (longlong *)FUN_140e8da20(&local_c8,local_res8,0);
  if (plVar7 != &local_188) {
    local_158 = (longlong *)*plVar7;
    uStack_150 = (undefined4)plVar7[1];
    uStack_14c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_158);
  }
  local_168 = 0x6da;
  local_18c = 0xf;
  local_198 = 0x10000000000009d;
  iVar5 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_198);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (0 < iVar5) {
    do {
      local_168 = 0x6db;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_18c = 10;
      local_198 = 0;
      iVar5 = FUN_140e851f0(uVar6,&local_198,DAT_141955260,0);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if (iVar5 == 0) {
        local_168 = 0x6dc;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
        uStack_10c = 10;
        local_118 = 0;
        iVar5 = FUN_140e851f0(uVar6,&local_118,DAT_141955260,0);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        if (iVar5 == 0) {
          local_168 = 0x6dc;
        }
        else {
          local_168 = 0x6dd;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          uStack_14c = 6;
          local_158 = local_res8;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_158,DAT_141a0a828,0x80000000,&local_b8,uVar10,
                        (ulonglong)pplVar12 & 0xffffffffffffff00);
          uVar11 = (undefined4)(uVar10 >> 0x20);
          if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_a8 = &local_188;
          local_148 = local_b8;
          uStack_140 = CONCAT44(uStack_ac,uStack_b0);
          if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_148);
          local_a0 = local_f8;
          pplVar12 = &local_a8;
          uVar10 = CONCAT44(uVar11,DAT_1419fe568);
          FUN_140e634e0(local_res8,local_res10,&local_1a8,2,uVar10,pplVar12);
        }
      }
      else {
        local_168 = 0x6db;
      }
      cVar4 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar4 != '\0');
  }
  uVar11 = (undefined4)(uVar10 >> 0x20);
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (((uStack_17c != 2) || (local_188 == 0)) || (*(int *)(local_188 + 0x24) == 0)) {
    local_168 = 0x6df;
    goto LAB_140403301;
  }
  local_168 = 0x6e1;
  dVar1 = (double)FUN_140e78f00((longlong)(*(int *)(local_188 + 0x24) + -1));
  iVar5 = (int)dVar1;
  plVar7 = (longlong *)0x0;
  if (((uStack_17c & 0xffffff) == 2) && (local_188 != 0)) {
    if ((iVar5 < 0) || (*(int *)(local_188 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(local_188 + 0x24));
    }
    else {
      plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_188 + 8));
    }
    uVar9 = 0xffffff;
    if (plVar7 != &local_128) goto LAB_1404030c3;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar7 = &local_188;
LAB_1404030c3:
    local_148 = *plVar7;
    uStack_140 = plVar7[1];
    FUN_140041b80(&local_128,&local_148);
    uVar9 = uStack_11c;
  }
  bVar8 = (byte)uVar9;
  local_168 = 0x6e3;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_148 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
  uStack_140 = CONCAT44(uRam0000000141dc655c,uRam0000000141dc6558);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_a8 = &local_108;
  local_148 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
  uStack_140 = CONCAT44(uRam0000000141dc655c,uRam0000000141dc6558);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_148);
  local_a0 = local_f8;
  local_148 = CONCAT44(uRam0000000141dd287c,_DAT_141dd2878);
  uStack_140 = CONCAT44(DAT_141dd2884,uRam0000000141dd2880);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_148);
  local_98 = &local_e8;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000a6;
  local_148 = 0x1000000000000a6;
  uStack_140 = CONCAT44(0xf,uStack_150);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_90 = local_d8;
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1a8,4,CONCAT44(uVar11,DAT_141a0a7c8),&local_a8
                       );
  iVar5 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar6);
  lVar3 = local_128;
  if (0 < iVar5) {
    lVar2 = CONCAT44(uStack_11c,uStack_120);
    do {
      local_168 = 0x6e4;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      FUN_140e609c0(local_res8);
      if (&local_128 != plVar7) {
        local_148 = lVar3;
        uStack_140 = lVar2;
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar7);
        }
        FUN_140041b80(plVar7,&local_148);
      }
      FUN_140e60910(1);
      cVar4 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar4 != '\0');
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
LAB_140403301:
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

