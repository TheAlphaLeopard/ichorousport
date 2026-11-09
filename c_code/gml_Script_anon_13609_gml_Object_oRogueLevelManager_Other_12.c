// gml_Script_anon_13609_gml_Object_oRogueLevelManager_Other_12 @ 0x140d11190

undefined8 *
gml_Script_anon_13609_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 uVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  double local_188;
  uint local_17c;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_130 = "gml_Script_anon@13306@gml_Object_oRogueLevelManager_Other_12";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x1d5;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x1d6;
  local_17c = 0;
  local_188 = 0.0;
  bVar2 = true;
  do {
    plVar8 = &DAT_1419df7b0;
    iVar6 = 0;
    if (!bVar2) {
      local_128 = 0x1d6;
      uVar5 = local_17c & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_188 = (double)((longlong)local_188 + 1);
          }
          else {
            if (uVar5 == 0xd) goto LAB_140d11302;
            FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
          }
          goto LAB_140d11310;
        }
        local_188 = (double)FUN_140e4b060(&local_188);
LAB_140d11302:
        local_17c = 0;
      }
      local_188 = local_188 + 1.0;
    }
LAB_140d11310:
    bVar2 = false;
    if (param_4 < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*param_5;
    }
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar6 = *(int *)(*plVar7 + 0x24);
    }
    local_cc = 0;
    local_d8 = (double)iVar6;
    iVar6 = FUN_140e851f0(&local_188,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    puVar3 = local_res18;
    if (iVar6 == -2 || -1 < iVar6) {
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      _eh_vector_destructor_iterator_(local_c8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_138;
      return puVar3;
    }
    local_128 = 0x1d7;
    iVar6 = FUN_140e4a740(&local_188);
    if (0 < param_4) {
      plVar8 = (longlong *)*param_5;
    }
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar6 < 0) || (*(int *)(lVar1 + 0x24) <= iVar6)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar6,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar8 != &local_168) {
      local_178 = *plVar8;
      lStack_170 = plVar8[1];
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_178);
    }
    local_128 = 0x1d8;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    FUN_140e87170(&local_168,DAT_1419fe0e8,0x80000000,&local_e8,local_res8,local_res10);
    plVar8 = local_res8;
    FUN_140e87170(&local_168,DAT_1419fe158,0x80000000,&local_f8,local_res8,local_res10);
    uVar10 = (undefined4)((ulonglong)plVar8 >> 0x20);
    lStack_170 = CONCAT44(uStack_dc,uStack_e0);
    local_178 = local_e8;
    if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_178);
    local_88 = local_c8;
    lStack_170 = CONCAT44(uStack_ec,uStack_f0);
    local_178 = local_f8;
    if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_178);
    uStack_8c = 0xf;
    local_98 = 0x1000000000000db;
    lStack_170 = CONCAT44(0xf,uStack_90);
    local_178 = 0x1000000000000db;
    local_80 = local_b8;
    if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_178);
    local_78 = local_a8;
    ppuVar12 = &local_88;
    uVar9 = CONCAT44(uVar10,DAT_141a1f460);
    plVar8 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_158,3,uVar9,ppuVar12);
    if (plVar8 != &local_148) {
      local_178 = *plVar8;
      lStack_170 = plVar8[1];
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_128 = 0x1d9;
    iVar6 = FUN_140e63cb0(local_70,&local_res8,&local_res10,&local_148);
    if (0 < iVar6) {
      do {
        local_128 = 0x1da;
        plVar8 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57c10);
        uVar11 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_168,DAT_141a57c10,0x80000000,&local_108,uVar9,uVar11);
        FUN_140e609c0(local_res8);
        if (&local_108 != plVar8) {
          lStack_170 = CONCAT44(uStack_fc,uStack_100);
          local_178 = local_108;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar8);
          }
          FUN_140041b80(plVar8,&local_178);
        }
        FUN_140e60910(1);
        local_128 = 0x1db;
        plVar8 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7038);
        ppuVar12 = (undefined1 **)(uVar11 & 0xffffffffffffff00);
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_168,DAT_1419f7038,0x80000000,&local_118,uVar9,ppuVar12);
        FUN_140e609c0(local_res8);
        if (&local_118 != plVar8) {
          lStack_170 = CONCAT44(uStack_10c,uStack_110);
          local_178 = local_118;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar8);
          }
          FUN_140041b80(plVar8,&local_178);
        }
        FUN_140e60910(1);
        cVar4 = FUN_140e643f0(local_70,&local_res8,&local_res10);
      } while (cVar4 != '\0');
    }
    FUN_140e63970(local_70,&local_res8,&local_res10);
    if (local_60 != 0) {
      FUN_140e4cd60();
    }
  } while( true );
}

