// gml_Script_anon_13130_gml_Object_oRogueLevelManager_Other_12 @ 0x140d10130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_13130_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar9;
  undefined4 uVar10;
  undefined1 **in_stack_fffffffffffffe70;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  undefined4 local_14c;
  longlong local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  double local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_130 = "gml_Script_anon@12849@gml_Object_oRogueLevelManager_Other_12";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x1c3;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x1c4;
  local_17c = 0;
  local_188 = 0.0;
  bVar2 = true;
  do {
    iVar6 = 0;
    if (!bVar2) {
      local_128 = 0x1c4;
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
            if (uVar5 == 0xd) {
              local_17c = 0;
              goto LAB_140d10290;
            }
            FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
          }
          goto LAB_140d1029a;
        }
        local_188 = (double)FUN_140e4b060(&local_188);
        local_17c = 0;
      }
LAB_140d10290:
      local_188 = local_188 + 1.0;
    }
LAB_140d1029a:
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
    local_9c = 0;
    local_a8 = (double)iVar6;
    iVar6 = FUN_140e851f0(&local_188,&local_a8,DAT_141955260,1);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    puVar3 = local_res18;
    if (iVar6 == -2 || -1 < iVar6) {
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_138;
      return puVar3;
    }
    local_128 = 0x1c5;
    iVar6 = FUN_140e4a740(&local_188);
    if (param_4 < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*param_5;
    }
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar6 < 0) || (*(int *)(lVar1 + 0x24) <= iVar6)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar6,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_158) {
      local_168 = *plVar7;
      lStack_160 = plVar7[1];
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_168);
    }
    local_128 = 0x1c6;
    in_stack_fffffffffffffe70 =
         (undefined1 **)((ulonglong)in_stack_fffffffffffffe70 & 0xffffffffffffff00);
    pcVar9 = (code *)((ulonglong)pcVar9 & 0xffffffffffffff00);
    FUN_140e87440(&local_158,DAT_1419fa6d8,0x80000000,&local_e8,pcVar9,in_stack_fffffffffffffe70);
    cVar4 = FUN_140e491e0(&local_e8);
    if (cVar4 == '\0') {
      local_128 = 0x1c6;
    }
    else {
      local_128 = 0x1c7;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      FUN_140e87170(&local_158,DAT_1419fe0e8,0x80000000,&local_f8,local_res8,local_res10);
      plVar7 = local_res8;
      FUN_140e87170(&local_158,DAT_1419fe158,0x80000000,&local_108,local_res8,local_res10);
      uVar10 = (undefined4)((ulonglong)plVar7 >> 0x20);
      lStack_160 = CONCAT44(uStack_ec,uStack_f0);
      local_168 = local_f8;
      if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_168);
      local_98 = local_d8;
      lStack_160 = CONCAT44(uStack_fc,uStack_100);
      local_168 = local_108;
      if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_168);
      local_90 = local_c8;
      uStack_6c = 0xf;
      local_78 = 0x100000000000116;
      lStack_160 = CONCAT44(0xf,uStack_70);
      local_168 = 0x100000000000116;
      if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_168);
      in_stack_fffffffffffffe70 = &local_98;
      pcVar9 = (code *)CONCAT44(uVar10,DAT_141a1f460);
      local_88 = local_b8;
      plVar7 = (longlong *)
               FUN_140e634e0(local_res8,local_res10,&local_178,3,pcVar9,in_stack_fffffffffffffe70);
      if (plVar7 != &local_148) {
        local_168 = *plVar7;
        lStack_160 = plVar7[1];
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_168);
      }
      local_128 = 0x1c8;
      iVar6 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_148);
      if (0 < iVar6) {
        do {
          local_128 = 0x1c8;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
          FUN_140e87440(uVar8,DAT_141a55540,0x80000000,&local_120,
                        (ulonglong)pcVar9 & 0xffffffffffffff00,
                        (ulonglong)in_stack_fffffffffffffe70 & 0xffffffffffffff00);
          local_168 = _DAT_141ddb138;
          lStack_160 = lRam0000000141ddb140;
          if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_168);
          local_98 = local_d8;
          uVar8 = FUN_140069500(uVar8);
          in_stack_fffffffffffffe70 = &local_98;
          pcVar9 = (code *)&local_120;
          FUN_140e63610(uVar8,local_res10,&local_178,1,pcVar9,in_stack_fffffffffffffe70);
          cVar4 = FUN_140e643f0(local_68,&local_res8,&local_res10);
        } while (cVar4 != '\0');
      }
      FUN_140e63970(local_68,&local_res8,&local_res10);
      if (local_58 != 0) {
        FUN_140e4cd60();
      }
    }
  } while( true );
}

