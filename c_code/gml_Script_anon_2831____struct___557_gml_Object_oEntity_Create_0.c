// gml_Script_anon_2831____struct___557_gml_Object_oEntity_Create_0 @ 0x140aaa6a0

undefined8 *
gml_Script_anon_2831____struct___557_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined8 **ppuVar8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  double local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  double *local_30;
  
  local_50 = "gml_Script_anon@2539@gml_Object_oEntity_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x9d;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x9f;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff3b8);
  FUN_1400bdd80(uVar3);
  local_48 = 0xa1;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
    if (puVar4 == &local_88) goto LAB_140aaa7e6;
  }
  local_a8 = (longlong *)*puVar4;
  uStack_a0 = puVar4[1];
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_a8);
LAB_140aaa7e6:
  local_40 = &local_88;
  ppuVar8 = &local_40;
  uVar6 = CONCAT44(uVar7,DAT_1419fcb88);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar6,ppuVar8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((param_4 < 2) || (puVar5 = *(undefined8 **)(param_5 + 8), puVar5 != &local_78)) {
      local_a8 = (longlong *)*puVar5;
      uStack_a0 = puVar5[1];
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
    }
    iVar2 = DAT_141a1f4e0;
    local_38 = &local_78;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_5c = 0;
    local_68 = (double)iVar2;
    local_30 = &local_68;
    uStack_a0 = CONCAT44(6,(undefined4)uStack_a0);
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_a8 = param_1;
    FUN_140e87440(&local_a8,DAT_141a0a828,0x80000000,&local_98,uVar6,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)((ulonglong)uStack_a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar7,DAT_141a035d8),&local_38);
    iVar2 = FUN_140e851f0(uVar3,&local_98,DAT_141955260,0);
    if (iVar2 == 0) {
      local_48 = 0xa2;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
    }
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

