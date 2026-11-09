// gml_GlobalScript_snake_case @ 0x1404a40f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_snake_case
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  uint uStack_17c;
  double local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  double local_130;
  undefined4 local_124;
  double local_118 [2];
  double local_108 [2];
  double local_f8;
  byte local_ec;
  double local_e8 [2];
  double local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  double local_c8;
  double dStack_c0;
  double *local_b8;
  double *local_b0;
  double *local_a8;
  double *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_150 = "gml_Script___signal_send@anon@2791@SignalController@SIGNALS";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x58;
  uVar9 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0.0;
  local_18c = 0;
  local_198 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x59;
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fa278);
  if (pdVar5 != &local_f8) {
    local_168 = *pdVar5;
    uStack_160 = pdVar5[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  local_a8 = &local_f8;
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
LAB_1404a424d:
    local_168 = *pdVar7;
    uStack_160 = pdVar7[1];
    if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_168);
  }
  else {
    pdVar7 = (double *)*param_5;
    if (pdVar7 != local_e8) goto LAB_1404a424d;
  }
  local_a0 = local_e8;
  uVar8 = CONCAT44(uVar9,DAT_1419fa238);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_198,2,uVar8,&local_a8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_148 = 0x5a;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    uVar6 = 8;
  }
  else {
    local_148 = 0x5c;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if (pdVar5 != local_118) {
      local_168 = *pdVar5;
      uStack_160 = pdVar5[1];
      if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_168);
    }
    local_b8 = local_118;
    if (param_4 < 1) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_1404a4370:
      local_168 = *pdVar5;
      uStack_160 = pdVar5[1];
      if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_168);
    }
    else {
      pdVar5 = (double *)*param_5;
      if (pdVar5 != local_108) goto LAB_1404a4370;
    }
    local_b0 = local_108;
    pdVar5 = (double *)CONCAT44(uVar9,DAT_141a01138);
    pdVar7 = (double *)FUN_140e634e0(local_res8,local_res10,&local_198,2,pdVar5,&local_b8);
    if (pdVar7 != &local_188) {
      local_168 = *pdVar7;
      uStack_160 = pdVar7[1];
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_168);
    }
    if (((uStack_17c == 2) && (local_188 != 0.0)) && (0 < *(int *)((longlong)local_188 + 0x24))) {
      local_148 = 0x60;
      iVar4 = *(int *)((longlong)local_188 + 0x24);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_16c = 0;
      local_178 = (double)(iVar4 + -2);
      bVar1 = true;
      while( true ) {
        uVar9 = (undefined4)((ulonglong)pdVar5 >> 0x20);
        if (!bVar1) {
          local_148 = 0x60;
          local_8c = 0;
          local_98 = 0x4000000000000000;
          FUN_1400462a0(&local_178,&local_98);
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
        }
        bVar1 = false;
        local_7c = 0;
        local_88 = 0;
        uVar3 = FUN_140e851f0(&local_178,&local_88,DAT_141955260,1);
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        if (0x7fffffff < uVar3) break;
        local_148 = 0x61;
        iVar4 = FUN_140e4a740(&local_178);
        pdVar5 = (double *)0x0;
        if (((uStack_17c & 0xffffff) == 2) && (local_188 != 0.0)) {
          if ((iVar4 < 0) || (*(int *)((longlong)local_188 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)((longlong)local_188 + 0x24));
          }
          else {
            pdVar5 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)local_188 + 8));
          }
          if (pdVar5 != &local_130) goto LAB_1404a457e;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          pdVar5 = &local_188;
LAB_1404a457e:
          local_c8 = *pdVar5;
          dStack_c0 = pdVar5[1];
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_130);
          }
          FUN_140041b80(&local_130,&local_c8);
        }
        local_148 = 0x66;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        local_b8 = &local_130;
        pdVar5 = (double *)CONCAT44(uVar9,DAT_141a02ef8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_198,1,pdVar5,&local_b8);
        cVar2 = FUN_140e491e0(uVar6);
        uVar9 = (undefined4)((ulonglong)pdVar5 >> 0x20);
        if (cVar2 == '\0') {
          local_148 = 0x67;
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          local_140 = 0;
          local_138 = 0;
          local_134 = 5;
          local_b0 = &local_188;
          local_a8 = &local_178;
          local_c8 = _DAT_1419e5f80;
          dStack_c0 = dRam00000001419e5f88;
          if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_c8);
          local_a0 = local_e8;
          pdVar5 = (double *)CONCAT44(uVar9,DAT_1419fd808);
          FUN_140e634e0(local_res8,local_res10,&local_140,3,pdVar5,&local_b0);
          local_148 = 0x68;
        }
        else {
          local_148 = 0x6b;
          iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_130);
          if (0 < iVar4) {
            do {
              pdVar5 = (double *)0x0;
              local_148 = 0x6c;
              if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_198);
              }
              local_198 = 0;
              local_190 = 0;
              local_18c = 5;
              if (param_4 < 1) {
                pdVar7 = (double *)&DAT_1419df7b0;
LAB_1404a474b:
                local_c8 = *pdVar7;
                dStack_c0 = pdVar7[1];
                if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_118);
                }
                FUN_140041b80(local_118,&local_c8);
              }
              else {
                pdVar7 = (double *)*param_5;
                if (pdVar7 != local_118) goto LAB_1404a474b;
              }
              local_b8 = local_118;
              if (param_4 < 2) {
                pdVar7 = (double *)&DAT_1419df7b0;
LAB_1404a479a:
                local_c8 = *pdVar7;
                dStack_c0 = pdVar7[1];
                if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_108);
                }
                FUN_140041b80(local_108,&local_c8);
              }
              else {
                pdVar7 = (double *)param_5[1];
                if (pdVar7 != local_108) goto LAB_1404a479a;
              }
              local_b0 = local_108;
              local_cc = local_16c;
              local_d0 = local_170;
              if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
                local_d8 = local_178;
              }
              else {
                FUN_1400419b0(&local_d8,&local_178);
              }
              uStack_160 = (double)CONCAT44(7,(undefined4)uStack_160);
              local_168 = (double)CONCAT44(local_168._4_4_,1);
              FUN_1400460e0(&local_d8,&local_168);
              if ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_168);
              }
              iVar4 = FUN_140e4a740(&local_d8);
              if (((uStack_17c & 0xffffff) == 2) && (local_188 != 0.0)) {
                if ((iVar4 < 0) || (*(int *)((longlong)local_188 + 0x24) <= iVar4)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                                *(undefined4 *)((longlong)local_188 + 0x24));
                }
                else {
                  pdVar5 = (double *)
                           ((longlong)iVar4 * 0x10 + *(longlong *)((longlong)local_188 + 8));
                }
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                pdVar5 = &local_188;
              }
              FUN_140e63610(local_res8,local_res10,&local_198,2,pdVar5,&local_b8);
              if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_d8);
              }
              cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_78,&local_res8,&local_res10);
          if (local_68 != 0) {
            FUN_140e4cd60();
          }
        }
      }
      local_148 = 0x6f;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      uVar6 = 10;
      *(undefined4 *)((longlong)param_3 + 0xc) = 10;
      goto LAB_1404a49a6;
    }
    local_148 = 0x5e;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fa278);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    uVar6 = 9;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
LAB_1404a49a6:
  *param_3 = uVar6;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

