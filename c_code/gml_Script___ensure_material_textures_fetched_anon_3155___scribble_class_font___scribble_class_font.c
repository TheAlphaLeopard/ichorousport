// gml_Script___ensure_material_textures_fetched_anon_3155___scribble_class_font___scribble_class_font @ 0x140144b00

undefined8 *
gml_Script___ensure_material_textures_fetched_anon_3155___scribble_class_font___scribble_class_font
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  uint local_res8;
  undefined4 uVar11;
  longlong ***ppplVar12;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  longlong local_188;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 local_13c;
  longlong local_138 [2];
  longlong *local_128;
  undefined4 local_11c;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  longlong local_100;
  uint uStack_f4;
  longlong **local_f0;
  longlong *local_e8;
  longlong **local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_170 = "gml_Script___copy_to@anon@1927@__scribble_class_font@__scribble_class_font";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x37;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_res8 = 0xffffff;
  uStack_f4 = 0xffffff;
  iVar9 = 0;
  local_100 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x39;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 6;
  local_128 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  local_e0 = &local_128;
  ppplVar12 = &local_e0;
  uVar7 = CONCAT44(uVar11,DAT_141a063c8);
  plVar6 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar7,ppplVar12);
  lVar10 = 0;
  if (plVar6 != &local_100) {
    local_118 = *plVar6;
    uStack_110 = (undefined4)plVar6[1];
    uStack_10c = *(undefined4 *)((longlong)plVar6 + 0xc);
    FUN_140041b80(&local_100,&local_118);
    local_res8 = uStack_f4;
    lVar10 = local_100;
  }
  local_168 = 0x3a;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = 0.0;
  local_168 = 0x3b;
  if ((local_res8 == 2) && (lVar10 != 0)) {
    iVar9 = *(int *)(lVar10 + 0x24);
  }
  if (0 < iVar9) {
    local_108 = local_res8 & 0xffffff;
    do {
      iVar9 = iVar9 + -1;
      local_168 = 0x3d;
      iVar2 = FUN_140e4a740(&local_198);
      plVar6 = (longlong *)0x0;
      if ((local_108 == 2) && (lVar10 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar10 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar10 + 0x24));
        }
        else {
          plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 8));
        }
        if (plVar6 != &local_188) goto LAB_140144d47;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar6 = &local_100;
LAB_140144d47:
        local_158 = (undefined4)*plVar6;
        uStack_154 = *(undefined4 *)((longlong)plVar6 + 4);
        uStack_150 = (undefined4)plVar6[1];
        uStack_14c = *(undefined4 *)((longlong)plVar6 + 0xc);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_158);
      }
      local_168 = 0x3e;
      local_cc = DAT_141dcb7f4;
      local_d0 = DAT_141dcb7f0;
      if ((1 << ((byte)DAT_141dcb7f4 & 0x1f) & 0x46U) == 0) {
        local_d8 = DAT_141dcb7e8;
      }
      else {
        FUN_1400419b0(&local_d8,&DAT_141dcb7e8);
      }
      iVar2 = FUN_140e851f0(&local_188,&local_d8,DAT_141955260,0);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar2 == 0) {
        local_168 = 0x40;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06148);
        if (param_4 < 1) {
          puVar8 = &DAT_1419df7b0;
        }
        else {
          puVar8 = (undefined8 *)*param_5;
        }
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(puVar8,DAT_141a06148,0x80000000,&local_58,uVar7,
                      (ulonglong)ppplVar12 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar7 >> 0x20);
        local_158 = (undefined4)local_58;
        uStack_154 = local_58._4_4_;
        uStack_150 = uStack_50;
        uStack_14c = uStack_4c;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_158);
        local_f0 = &local_148;
        if (plVar6 != local_138) {
          local_158 = (undefined4)*plVar6;
          uStack_154 = *(undefined4 *)((longlong)plVar6 + 4);
          uStack_150 = (undefined4)plVar6[1];
          uStack_14c = *(undefined4 *)((longlong)plVar6 + 0xc);
          if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_158);
        }
        uVar3 = DAT_141a06508;
LAB_14014506c:
        local_e8 = local_138;
        ppplVar12 = &local_f0;
        uVar7 = CONCAT44(uVar11,uVar3);
        FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar7,ppplVar12);
      }
      else {
        local_168 = 0x42;
        local_bc = DAT_141dcb844;
        local_c0 = DAT_141dcb840;
        if ((1 << ((byte)DAT_141dcb844 & 0x1f) & 0x46U) == 0) {
          local_c8 = DAT_141dcb838;
        }
        else {
          FUN_1400419b0(&local_c8,&DAT_141dcb838);
        }
        iVar2 = FUN_140e851f0(&local_188,&local_c8,DAT_141955260,0);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        if (iVar2 == 0) {
          local_168 = 0x44;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06328);
          if (param_4 < 1) {
            puVar8 = &DAT_1419df7b0;
          }
          else {
            puVar8 = (undefined8 *)*param_5;
          }
          uVar7 = uVar7 & 0xffffffffffffff00;
          FUN_140e87440(puVar8,DAT_141a06328,0x80000000,&local_68,uVar7,
                        (ulonglong)ppplVar12 & 0xffffffffffffff00);
          uVar11 = (undefined4)(uVar7 >> 0x20);
          local_158 = (undefined4)local_68;
          uStack_154 = local_68._4_4_;
          uStack_150 = uStack_60;
          uStack_14c = uStack_5c;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_158);
          local_f0 = &local_148;
          if (plVar6 != local_138) {
            local_158 = (undefined4)*plVar6;
            uStack_154 = *(undefined4 *)((longlong)plVar6 + 4);
            uStack_150 = (undefined4)plVar6[1];
            uStack_14c = *(undefined4 *)((longlong)plVar6 + 0xc);
            if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_138);
            }
            FUN_140041b80(local_138,&local_158);
          }
          uVar3 = DAT_141a06168;
          goto LAB_14014506c;
        }
        local_168 = 0x46;
        local_ac = DAT_141dcb824;
        local_b0 = DAT_141dcb820;
        if ((1 << ((byte)DAT_141dcb824 & 0x1f) & 0x46U) == 0) {
          local_b8 = DAT_141dcb818;
        }
        else {
          FUN_1400419b0(&local_b8,&DAT_141dcb818);
        }
        iVar2 = FUN_140e851f0(&local_188,&local_b8,DAT_141955260,0);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        if (iVar2 != 0) {
          local_9c = DAT_141dcb834;
          local_a0 = DAT_141dcb830;
          if ((1 << ((byte)DAT_141dcb834 & 0x1f) & 0x46U) == 0) {
            local_a8 = DAT_141dcb828;
          }
          else {
            FUN_1400419b0(&local_a8,&DAT_141dcb828);
          }
          iVar2 = FUN_140e851f0(&local_188,&local_a8,DAT_141955260,0);
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          if (iVar2 != 0) {
            if (param_4 < 2) {
              puVar8 = &DAT_1419df7b0;
            }
            else {
              puVar8 = (undefined8 *)param_5[1];
            }
            cVar1 = FUN_140e491e0(puVar8);
            if (cVar1 == '\0') {
              local_8c = DAT_141dcb854;
              local_90 = DAT_141dcb850;
              if ((1 << ((byte)DAT_141dcb854 & 0x1f) & 0x46U) == 0) {
                local_98 = DAT_141dcb848;
              }
              else {
                FUN_1400419b0(&local_98,&DAT_141dcb848);
              }
              iVar2 = FUN_140e851f0(&local_188,&local_98,DAT_141955260,0);
              if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_98);
              }
              if (iVar2 != 0) {
                local_7c = DAT_141dcb804;
                local_80 = DAT_141dcb800;
                if ((1 << ((byte)DAT_141dcb804 & 0x1f) & 0x46U) == 0) {
                  local_88 = DAT_141dcb7f8;
                }
                else {
                  FUN_1400419b0(&local_88,&DAT_141dcb7f8);
                }
                iVar2 = FUN_140e851f0(&local_188,&local_88,DAT_141955260,0);
                if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_88);
                }
                if (iVar2 != 0) {
                  local_6c = DAT_141dcb864;
                  local_70 = DAT_141dcb860;
                  if ((1 << ((byte)DAT_141dcb864 & 0x1f) & 0x46U) == 0) {
                    local_78 = DAT_141dcb858;
                  }
                  else {
                    FUN_1400419b0(&local_78,&DAT_141dcb858);
                  }
                  iVar2 = FUN_140e851f0(&local_188,&local_78,DAT_141955260,0);
                  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_78);
                  }
                  if (iVar2 != 0) {
                    uStack_10c = DAT_141dcb814;
                    uStack_110 = DAT_141dcb810;
                    if ((1 << ((byte)DAT_141dcb814 & 0x1f) & 0x46U) == 0) {
                      local_118 = DAT_141dcb808;
                    }
                    else {
                      FUN_1400419b0(&local_118,&DAT_141dcb808);
                    }
                    iVar2 = FUN_140e851f0(&local_188,&local_118,DAT_141955260,0);
                    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_118);
                    }
                    if (iVar2 != 0) goto LAB_140145387;
                  }
                }
              }
            }
            else {
LAB_140145387:
              uVar11 = (undefined4)(uVar7 >> 0x20);
              local_168 = 0x4a;
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              local_1a8 = 0;
              local_1a0 = 0;
              local_19c = 5;
              if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_148);
              }
              local_13c = 6;
              local_148 = param_1;
              uVar5 = FUN_140e5c910();
              FUN_140e42c10(uVar5,param_1);
              local_f0 = &local_148;
              local_e8 = &local_188;
              if (param_4 < 1) {
                puVar8 = &DAT_1419df7b0;
              }
              else {
                puVar8 = (undefined8 *)*param_5;
              }
              ppplVar12 = &local_f0;
              uVar7 = FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar11,DAT_141a01138),
                                    ppplVar12);
              FUN_140e98ef0(param_1,param_2,puVar8,&local_188,uVar7);
            }
          }
        }
      }
      local_168 = 0x4d;
      uVar4 = local_18c & 0xffffff;
      if (uVar4 == 0) {
LAB_1401454b1:
        local_198 = local_198 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_198 = (double)FUN_140e4b060(&local_198);
          local_18c = 0;
          goto LAB_1401454b1;
        }
        if (uVar4 == 7) {
          local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_198 = (double)((longlong)local_198 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_18c = 0;
            goto LAB_1401454b1;
          }
          FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
        }
      }
    } while (0 < iVar9);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_res8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

